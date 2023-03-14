#pragma once
#include "AutoTechnologi.h"
class MiniAutoTechnologi : public AutoTechnologi
{
public:
   MiniAutoTechnologi() :AutoTechnologi(MiniAuto) {}
   void BuildBody() override;
   void InstalEngine() override;
   void InstalWheels() override;
   void Paint() override;
   void PrepareSalone() override;
};

