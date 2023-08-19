#include "UAblChannelingBase.hpp"
#include "UAblChannelingVelocityConditional.hpp"
UAblChannelingVelocityConditional* UAblChannelingVelocityConditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblChannelingVelocityConditional");
    return (UAblChannelingVelocityConditional*)res;
}
