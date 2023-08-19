#include "UAnimNotify_SubObject.hpp"
#include "UObject.hpp"
UAnimNotify_SubObject* UAnimNotify_SubObject::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_SubObject");
    return (UAnimNotify_SubObject*)res;
}
