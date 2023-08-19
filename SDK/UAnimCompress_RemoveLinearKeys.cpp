#include "UAnimCompress.hpp"
#include "UAnimCompress_RemoveLinearKeys.hpp"
UAnimCompress_RemoveLinearKeys* UAnimCompress_RemoveLinearKeys::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimCompress_RemoveLinearKeys");
    return (UAnimCompress_RemoveLinearKeys*)res;
}
