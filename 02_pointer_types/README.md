Taking a deeper look into the behavioral differences between `int*`, `char*`, and `void*`.

Operation        `int*`        `char*`       `void*`
--------------------------------------------------------
Store &             √              √            √
Compare             √              √            √
Print &             √              √            √
Derefernce          √              √            X 
Derefernce          √              √            X          
Arithmetic          √              √            X
Must cast           X              X            √ 

`char*` and const `char*` must be cast to `void*` to return address.This is due to the operator overload for `char*` and const `char*`. `operator<<` will return characters until `'\0'` is read.