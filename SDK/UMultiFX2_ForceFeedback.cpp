#include "UForceFeedbackEffect.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_ForceFeedback.hpp"
UMultiFX2_ForceFeedback* UMultiFX2_ForceFeedback::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_ForceFeedback");
    return (UMultiFX2_ForceFeedback*)res;
}
