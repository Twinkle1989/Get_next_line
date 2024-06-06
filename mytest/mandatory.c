/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:24:10 by tsolanki          #+#    #+#             */
/*   Updated: 2024/06/06 19:24:18 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int fd1 = open("file1.txt", O_RDONLY);
    int fd2 = open("file2.txt", O_RDONLY);
    char *line;

    // Alternate reading lines from both files
    line = get_next_line(fd1);
    printf("fd1: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("fd2: %s", line);
    free(line);

    line = get_next_line(fd1);
    printf("fd1: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("fd2: %s", line);
    free(line);

    line = get_next_line(fd1);
    printf("fd1: %s", line);
    free(line);

    line = get_next_line(fd2);
    printf("fd2: %s", line);
    free(line);

    close(fd1);
    close(fd2);
    return 0;
}
