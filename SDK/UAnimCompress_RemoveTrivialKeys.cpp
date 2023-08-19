#include "UAnimCompress.hpp"
#include "UAnimCompress_RemoveTrivialKeys.hpp"
UAnimCompress_RemoveTrivialKeys* UAnimCompress_RemoveTrivialKeys::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompress_RemoveTrivialKeys");
    return (UAnimCompress_RemoveTrivialKeys*)res;
}
