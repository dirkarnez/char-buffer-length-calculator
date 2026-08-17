char-buffer-length-calculator
=============================
`int size = snprintf(NULL, 0, "Name: %s, Age: %d", MAX, MAX);`

| Specifier | Used For                 | Example Type  |
|-----------|--------------------------|---------------|
| %d or %i  | Standard signed integer  | int           |
| %ld       | Long signed integer      | long int      |
| %lld      | Long long signed integer | long long int |
| %hd       | Short signed integer     | short int     |

### Notes
- Integer in 32 bit system needs 12 length for `%d`
  ```
  printf("%d", my_int); max length
  ```
