#include "UAnimCompress_BitwiseCompressOnly.hpp"
#include "UAnimCompress_LeastDestructive.hpp"
UAnimCompress_LeastDestructive* UAnimCompress_LeastDestructive::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompress_LeastDestructive");
    return (UAnimCompress_LeastDestructive*)res;
}
