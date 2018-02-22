##include <hw/inout.h>
##include <sys/mman.h>

int port = 0x378; // printer/parallel port
int value = 0;

int main (int argc, char *argv[])
{
    // start network protocol Qnet
    optproc(); // start touch etc/system/config/useqnet

    ThreadCtl (_NTO_TCTL_IO, NULL);
    while (1)
    {
        out8 (port, value);
        value = ~value;
        delay (1);
    }

    return 0;
}
