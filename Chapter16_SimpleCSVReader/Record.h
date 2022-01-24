#ifndef RECORD_H
#define RECORD_H

#include <stdint.h>

#define NUM_VALUES 2

/* TYPES */

typedef struct entry
{
    char letter;
    int value;
} entry_t;

typedef struct records
{
    entry_t *entries;
    size_t length;
} records_t;

typedef enum
{
    SORTING_SCHEME_ASCENDING = 0,
    SORTING_SCHEME_DESCENDING = 1
} sorting_scheme_t;

/* DECLARATIONS */

entry_t *create_entries(const size_t num_entries);

void *delete_entries(entry_t *entries);

records_t *create_records();

void *delete_records(records_t *records);

void set_records(records_t *const records, entry_t *const entries, const size_t length);

void print_records(const records_t *const records, const char *const header);

void random_fill_records(records_t *const records);

void sort_records(const records_t *const records, const sorting_scheme_t sorting_scheme);

#endif // RECORD_H
