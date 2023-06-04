/* Copyright (C) The libssh2 project and its contributors. */

#include "runner.h"

int test(LIBSSH2_SESSION *session)
{
    return test_auth_keyboard(session, 0,
                              "libssh2", /* set in Dockerfile */
                              "my test password"); /* set in Dockerfile */
}
