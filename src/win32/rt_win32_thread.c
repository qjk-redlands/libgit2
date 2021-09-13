/*
 * The purpose of this file is to (effectively) rename a source file without
 * altering the upstream source.
 *
 * Putting 2 following source files into the same VS project:
 *
 *  - src/thread.c
 *  - src/win32/thread.c
 *
 * leader to the following error on windows:
 *
 *  warning MSB8027: Two or more files with the name of thread.c will produce
 *  outputs to the same location. This can lead to an incorrect build result.
 *
 */
#include "thread.c"
