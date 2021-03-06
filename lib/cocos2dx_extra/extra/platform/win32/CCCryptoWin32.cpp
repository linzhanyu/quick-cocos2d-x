
#include "crypto/CCCrypto.h"

NS_CC_EXTRA_BEGIN

int CCCrypto::getAES256KeyLength(void)
{
    CCLOG("CCCrypto::getAES256KeyLength() - not support this platform.");
    return 0;
}

int CCCrypto::cryptAES256(bool isDecrypt,
                          const void* input,
                          int inputLength,
                          void* output,
                          int outputBufferLength,
                          const void* key,
                          int keyLength)
{
    CCLOG("CCCrypto::cryptAES256() - not support this platform.");
    return 0;
}

NS_CC_EXTRA_END
