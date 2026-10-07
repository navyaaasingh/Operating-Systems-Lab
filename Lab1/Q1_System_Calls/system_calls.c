import os
import subprocess

TEST_FILE = "os_lab_test.txt"


def child_process():
    print("\n--- CHILD PROCESS ---")
    print("Child PID:", os.getpid())
    print("Parent PID:", os.getppid())

    # Execute a harmless Linux command
    result = subprocess.run(
        ["echo", "Hello from the child process"],
        capture_output=True,
        text=True
    )

    print("Linux command output:", result.stdout.strip())

    # Create and write to a controlled test file
    try:
        with open(TEST_FILE, "w") as file:
            file.write("Operating Systems Lab test file.\n")
            file.write("Created and written by the child process.\n")

        print("File created and written successfully.")

        # Read the file
        with open(TEST_FILE, "r") as file:
            content = file.read()

        print("File contents:")
        print(content)

        print("File closed successfully.")

    except OSError as error:
        print("File operation error:", error)

    # Inspect /dev/null
    try:
        with open("/dev/null", "r") as device:
            device.read(0)

        print("/dev/null inspected successfully.")

    except OSError as error:
        print("Device interface error:", error)

    # Handle an invalid path
    try:
        with open("/invalid/path/test.txt", "r") as file:
            file.read()

    except OSError as error:
        print("Handled invalid path correctly:", error)


def main():
    print("--- PARENT PROCESS ---")
    print("Parent PID:", os.getpid())

    # Create child process using multiprocessing
    from multiprocessing import Process

    child = Process(target=child_process)

    print("Creating child process...")
    child.start()

    print("Child PID:", child.pid)

    # Wait for child process to finish
    child.join()

    print("Child process completed.")
    print("Exit code:", child.exitcode)


if __name__ == "__main__":
    main()
