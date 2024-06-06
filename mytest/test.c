/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:07:45 by tsolanki          #+#    #+#             */
/*   Updated: 2024/06/04 19:07:53 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <limits.h>

int main(int argc, char **argv) {
    int i = 0;
    int fd = -1;
    if (argc == 2)
        fd = open(argv[1], O_RDONLY);
    else if (argc == 1)
        fd = STDIN_FILENO;
    if (fd < 0)
        return (0);

    char *line = NULL;
    while ((line = get_next_line(fd)) != NULL) {
        // Check for excessively large line before using it
        size_t total_len = ft_strlen(line); // Assume ft_strlen handles NULL safely
        if (total_len >= SIZE_MAX) {
            fprintf(stderr, "Error: Line length exceeds maximum size\n");
            free(line);
            continue; // Skip to the next line
        }

        printf("line[%d]: %s", i, line);
        free(line);
        i++;
    }
    close(fd);
    return (0);
}
