#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_MaterialParameterBase.hpp"
UMultiFX2_MaterialParameterBase* UMultiFX2_MaterialParameterBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialParameterBase");
    return (UMultiFX2_MaterialParameterBase*)res;
}
