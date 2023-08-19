#include "UCogGroupEvaluation_Distance.hpp"
#include "UCogGroupEvaluation_ModeDistance.hpp"
UCogGroupEvaluation_ModeDistance* UCogGroupEvaluation_ModeDistance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_ModeDistance");
    return (UCogGroupEvaluation_ModeDistance*)res;
}
