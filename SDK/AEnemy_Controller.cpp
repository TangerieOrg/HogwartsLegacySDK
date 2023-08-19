#include "AEnemy_Controller.hpp"
#include "ANPC_Controller.hpp"
AEnemy_Controller* AEnemy_Controller::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Controller");
    return (AEnemy_Controller*)res;
}
