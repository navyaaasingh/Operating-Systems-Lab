# Operating Systems Lab

A collection of Operating Systems laboratory programs, implementations, and practical exercises covering core OS concepts, including system calls, CPU scheduling, threads, inter-process communication, synchronization, memory management, disk scheduling, and file systems.

## Repository Structure

```text
Operating-Systems-Lab/
│
├── Capstone/
│
├── Lab1/
│   ├── Q1_System_Calls/
│   ├── Q2_FCFS_SJF/
│   ├── Q3_Priority_Round_Robin/
│   └── Q4_Metrics_Threads_IPC/
│
├── Lab2/
│   ├── Q1_Thread_Mutex/
│   ├── Q2_Producer_consumer/
│   ├── Q3_RW_DP/
│   └── Q4_Deadlock/
│
├── Lab3/
│   ├── Q1_Swapping_Address_Translation/
│   ├── Q2_Paging_Segmentation/
│   ├── Q3_FIFO_LRU/
│   ├── Q4_Device_Allocation/
│   └── Q5_FCFS_SSTF_SCAN_C-SCAN/
│
├── Lab4/
│   ├── Q1_File_Operations/
│   ├── Q2_Types_Access/
│   ├── Q3_File_Allocation/
│   └── Q4_Space_Mgmt_Access_Control/
│
└── README.md
```

## Lab Overview

### Lab 1 — System Calls and CPU Scheduling

- **System Calls:** Programs demonstrating system-level operations in Linux.
- **FCFS and SJF:** First-Come, First-Served and Shortest Job First CPU scheduling algorithms.
- **Priority Scheduling and Round Robin:** CPU scheduling based on process priorities and time quantum.
- **Metrics, Threads and IPC:** Process scheduling metrics, multithreading, and inter-process communication using pipes.

### Lab 2 — Process Synchronization and Deadlocks

- **Thread Mutex:** Mutual exclusion and synchronization using mutex locks.
- **Producer–Consumer:** Coordination between producer and consumer processes or threads.
- **Readers–Writers and Dining Philosophers:** Classical synchronization problems.
- **Deadlock:** Concepts and practical demonstrations related to deadlock handling.

### Lab 3 — Memory Management and Disk Scheduling

- **Swapping and Address Translation**
- **Paging and Segmentation**
- **Page Replacement:** FIFO and LRU algorithms.
- **Device Allocation**
- **Disk Scheduling:** FCFS, SSTF, SCAN, and C-SCAN algorithms.

### Lab 4 — File Systems and Access Control

- **File Operations:** Creating, reading, writing, and managing files.
- **File Types and Access Permissions**
- **File Allocation:** Techniques for allocating disk space to files.
- **Space Management and Access Control**

### Capstone

A dedicated directory for the Operating Systems capstone project. Project details, implementation, and documentation will be added as development progresses.

## Technologies Used

- **C** — System programming, process management, threads, and IPC.
- **Python 3** — Algorithm implementations and scheduling simulations.
- **Linux / Ubuntu** — Development and execution environment.
- **GCC** — C compiler.
- **Git and GitHub** — Version control and repository management.

## Prerequisites

Install the required tools on Ubuntu:

```bash
sudo apt update
sudo apt install build-essential python3 git
```

Verify the installations:

```bash
gcc --version
python3 --version
git --version
```

## How to Run the Programs

Clone the repository:

```bash
git clone https://github.com/YOUR_USERNAME/Operating-Systems-Lab.git
cd Operating-Systems-Lab
```

### Running a C Program

Navigate to the directory containing the source file:

```bash
cd Lab1/Q1_System_Calls
```

Compile:

```bash
gcc system_calls.c -o system_calls
```

Run:

```bash
./system_calls
```

For programs using POSIX threads, compile with the `-pthread` flag:

```bash
gcc thread_metrics_IPC.c -o thread_metrics_IPC -pthread
./thread_metrics_IPC
```

### Running a Python Program

Navigate to the appropriate directory:

```bash
cd Lab1/Q2_FCFS_SJF
```

Run:

```bash
python3 FCFS_SJF.py
```

For other programs, replace the filename with the relevant Python script.

## Learning Objectives

- Understand fundamental Operating Systems concepts.
- Implement and analyze CPU scheduling algorithms.
- Learn process creation, system calls, and inter-process communication.
- Practice multithreading and synchronization.
- Understand deadlocks and resource allocation.
- Explore memory management and page replacement.
- Implement disk scheduling and file management techniques.
- Gain practical experience with Linux command-line tools and system programming.

## Contribution and Updates

This repository is maintained as part of Operating Systems laboratory coursework. Programs and documentation will be added and updated as the laboratory exercises and capstone project progress.

## Author

**Your Name**

B.Tech — Computer Science and Engineering (AI & ML)

---

*This repository is intended for educational purposes and practical learning of Operating Systems concepts.*
