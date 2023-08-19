#include "UCogGroupEvaluation_FOV.hpp"
#include "UCogGroupEvaluation_FOVFocused.hpp"
UCogGroupEvaluation_FOVFocused* UCogGroupEvaluation_FOVFocused::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_FOVFocused");
    return (UCogGroupEvaluation_FOVFocused*)res;
}
