# Get_next_line
The get_next_line project is a function that reads a line from a file descriptor, allowing for efficient and manageable reading of text files. This function can be used in various contexts where line-by-line reading is required, such as file parsing or text processing.

# Features

Read Line-by-Line: Efficiently reads a single line at a time from a given file descriptor.
Buffer Management: Uses a buffer to minimize the number of read system calls, improving performance.
Memory Management: Handles dynamic memory allocation and ensures proper memory cleanup to prevent leaks.
# Bonus Features

Multiple File Descriptors: The bonus version supports reading from multiple file descriptors simultaneously, maintaining separate buffers and states for each.
Reentrant: Designed to be reentrant and thread-safe, allowing concurrent reads from different files.
