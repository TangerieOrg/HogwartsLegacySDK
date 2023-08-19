#include "FStencilManagerEffectName.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblRenderStencil.hpp"
UAblRenderStencil* UAblRenderStencil::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblRenderStencil");
    return (UAblRenderStencil*)res;
}
