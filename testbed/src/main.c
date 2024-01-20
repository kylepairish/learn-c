#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    KFATAL("A test message: %f", 3.14);
    KERROR("A test message: %f", 3.14);
    KWARN("A test message: %f", 3.14);
    KDEBUG("A test message: %f", 3.14);
    KINFO("A test message: %f", 3.14);
    KTRACE("A test message: %f", 3.14);

    KASSERT(1 == 0);
    return 0;
}