#include "UAnimCompress.hpp"
#include "UAnimCompress_BitwiseCompressOnly.hpp"
UAnimCompress_BitwiseCompressOnly* UAnimCompress_BitwiseCompressOnly::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompress_BitwiseCompressOnly");
    return (UAnimCompress_BitwiseCompressOnly*)res;
}
