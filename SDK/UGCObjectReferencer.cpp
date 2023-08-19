#include "UGCObjectReferencer.hpp"
#include "UObject.hpp"
UGCObjectReferencer* UGCObjectReferencer::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.GCObjectReferencer");
    return (UGCObjectReferencer*)res;
}
