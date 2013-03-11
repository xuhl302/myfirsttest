#include "lock.h"

Lock::Lock():locked(false)
{
    for (int i=0; i<40; i++)
        password1[i] = password2[i] = password3[i] = i;
}
Lock::~Lock() {}
bool Lock::isLocked()
{
    return locked;
}

void Lock::do_lock()
{
    locked = true;
}

bool Lock::do_unlock(int p1, int p2, int p3)
{
    if ((p1==*pps1) && (p2==*pps2) && (p3==*pps3))
        locked = false;

    return !locked;
}

void Lock::reset_password(int p1, int p2, int p3)
{
    pps1 = &password1[p1];
    pps2 = &password2[p2];
    pps3 = &password3[p3];
}

void Lock::get_password(int &p1, int &p2, int &p3)
{
    p1 = *pps1;
    p2 = *pps2;
    p3 = *pps3;
}

