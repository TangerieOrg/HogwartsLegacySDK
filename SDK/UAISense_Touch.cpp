#include "FAITouchEvent.hpp"
#include "UAISense.hpp"
#include "UAISense_Touch.hpp"
UAISense_Touch* UAISense_Touch::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AISense_Touch");
    return (UAISense_Touch*)res;
}
