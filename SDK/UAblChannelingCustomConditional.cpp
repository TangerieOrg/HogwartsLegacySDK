#include "UAblChannelingBase.hpp"
#include "UAblChannelingCustomConditional.hpp"
UAblChannelingCustomConditional* UAblChannelingCustomConditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblChannelingCustomConditional");
    return (UAblChannelingCustomConditional*)res;
}
