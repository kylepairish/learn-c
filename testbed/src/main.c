#include <core/logger.h>

int main(void) {
    KFATAL("A test mesage: %f", 3.14);
    KERROR("A test mesage: %f", 3.14);
    KWARN("A test mesage: %f", 3.14);
    KDEBUG("A test mesage: %f", 3.14);
    KINFO("A test mesage: %f", 3.14);
    KTRACE("A test mesage: %f", 3.14);
    return 0;
}