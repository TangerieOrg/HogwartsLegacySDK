#include "FDynamicPropertyPath.hpp"
#include "UObject.hpp"
#include "UPropertyBinding.hpp"
UPropertyBinding* UPropertyBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.PropertyBinding");
    return (UPropertyBinding*)res;
}
