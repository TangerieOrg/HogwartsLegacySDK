#include "FFunctionCaller.hpp"
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
#include "UPropertyValue.hpp"
#include "UVariantObjectBinding.hpp"
UVariantObjectBinding* UVariantObjectBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.VariantObjectBinding");
    return (UVariantObjectBinding*)res;
}
