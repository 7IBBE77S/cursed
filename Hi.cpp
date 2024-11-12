/************************************************************
 *  Author:         Nicholas Tibbetts
 *  Date:           03/11/2024 T12:55:02
 *  License:        Copyright 2024 Nic Tibbetts
 *  Description:    Cursed Coding
 ***********************************************************/

// https://onecompiler.com/cpp/42xv6jmyt

#include <iostream>
using namespace std;

int main()
{
       unsigned long long __[] = {
           ((0xAULL << 56)| (0x27ULL << 48)| (0x2EULL << 40)| 
            (0x2EULL<< 32)|
            (0x2DULL<< 24)| (0x6EULL << 16)| (0x62ULL << 8) |  
             0x15ULL)^      (~(~0ULL)),        (~0ULL - 
           ((0xD2ULL<< 56)| (0xCFULL << 48)| (0xD1ULL << 40)|
            (0xD9ULL<< 32)| (0x9CULL << 24)| (0x21ULL << 16)| 
            (0xFFULL<< 8) |  0x21ULL)),
           ((0x4EULL<< 56)| (0x69ULL << 48)| (0x63ULL << 40)| 
            (0x54ULL<< 32)| (0x69ULL << 24)| (0x62ULL << 16)| 
            (0x62ULL<< 8) | 0x73ULL) // ~:)
       };
       for (auto _ =-0x0; _ < (( + ~+-+-~__[1])>>63)+ 
           ((__[0]!= 0) <<3)+ ((__[1] != 0)<<2) -~0;++_)
       {                                        //!
              unsigned char ___ = static_cast<unsigned char>(
                  ((_ < (1 << 3) ?-+-+ __[0] >> (((1<< 6)^-+(1 << 3)) - (_) * (1 << 3))
                                 :~+-+-~__[1]>> (56 +-+(_^ +-8) * 8))&
                  ((1 << 8) - 1))^-+-
                  (((0x20 << 1) ^+0x2^-~+~-(__[(0x7 ^ +0x5)] >> 63)) & 0x7F));
              cout << ___;
       }
       return cout << endl
,+~(__[(0x3 & -0x7)>> 1] & +0x0);
}
