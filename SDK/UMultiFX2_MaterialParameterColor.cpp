#include "FLinearColor.hpp"
#include "UMultiFX2_MaterialParameterBase.hpp"
#include "UMultiFX2_MaterialParameterColor.hpp"
UMultiFX2_MaterialParameterColor* UMultiFX2_MaterialParameterColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialParameterColor");
    return (UMultiFX2_MaterialParameterColor*)res;
}
