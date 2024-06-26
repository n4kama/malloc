#ifndef FINDER_H
# define FINDER_H

#include <string.h>
#include <stdint.h>

#include "setup_and_free.h"

size_t max_blk(struct b_meta *b_meta);
unsigned int no_space_in_page(void *last_f_block);
void update_free_ptr(struct p_meta *p_meta);
struct b_meta *find_b_meta(void *ptr);
struct p_meta *find_p_meta(size_t size);
void *get_free_space(struct p_meta *p_meta);

#endif /* !FINDER_H */