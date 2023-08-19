#include "UAnimCompress.hpp"
#include "UAnimCompress_RemoveEverySecondKey.hpp"
UAnimCompress_RemoveEverySecondKey* UAnimCompress_RemoveEverySecondKey::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompress_RemoveEverySecondKey");
    return (UAnimCompress_RemoveEverySecondKey*)res;
}
