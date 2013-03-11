#ifndef _LOCK_H_
#define _LOCK_H_

class Lock{
 public:
    Lock();
    ~Lock();
    bool isLocked();
    void do_lock();
    bool do_unlock(int p1, int p2, int p3);
    void reset_password(int p1, int p2, int p3);
    void get_password(int &p1, int &p2, int &p3);
 private:
    bool locked;
    int password1[40];
    int password2[40];
    int password3[40];
    int *pps1;
    int *pps2;
    int *pps3;
};

#endif
