// adler32.h

#include "_Utils.h"

namespace hashing {
  const u_long ADLER32_MOD = 65521;

  /**
  (string A) -> (string B)
  Creates checksum B of string A, using
  adler32 hashing function. 
  Return string B - checksum.
  */
  static string adler32(const string data) {
    u_long length = data.length();
    uint32 a = 1, b = 0;
  
    for (u_long index = 0; index < length; ++index) {
      a = (a + data[index]) % ADLER32_MOD;
      b = (b + a) % ADLER32_MOD;
    }
  
    return intToHex((b << 16) | a);
  }
} // namespace hashing