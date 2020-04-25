# Read-Dat-with-struct


Given a binary file which consists of several size-fixed data in the little-endian order defined in the below. 

Please write a program with c++ to read ​output.dat​ file, 

and stdout in the following format.


struct Trade //size-fixed structure {
    uint64_t timestamp;
    uint64_t index;
    bool buy;
    char padding[7];
};
