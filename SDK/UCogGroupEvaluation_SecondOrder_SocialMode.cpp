#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_SecondOrder_SocialMode.hpp"
UCogGroupEvaluation_SecondOrder_SocialMode* UCogGroupEvaluation_SecondOrder_SocialMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_SecondOrder_SocialMode");
    return (UCogGroupEvaluation_SecondOrder_SocialMode*)res;
}
