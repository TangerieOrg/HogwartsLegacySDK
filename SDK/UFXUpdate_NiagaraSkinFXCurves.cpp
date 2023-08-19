#include "FUpdateNiagaraSkinFXColorCurve.hpp"
#include "FUpdateNiagaraSkinFXFloatCurve.hpp"
#include "UClass.hpp"
#include "UFXUpdate_NiagaraSkinFXCurves.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_NiagaraSkinFXCurves* UFXUpdate_NiagaraSkinFXCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_NiagaraSkinFXCurves");
    return (UFXUpdate_NiagaraSkinFXCurves*)res;
}
