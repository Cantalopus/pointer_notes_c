Basic usage and understanding of pointers in `C` and `C++`

`a` is a variable
`&` means address
`*` means dereference

`nullpt` is a pointer, of type pointer, pointing to nothing.
`int *p = nullptr;`

`C` and `C++` originally used `0` or `NULL` value, instead of `nullptr`. The issue with that is that `0` and `NULL` are actually integer values.

it is safe to call delete on `nullptr`
