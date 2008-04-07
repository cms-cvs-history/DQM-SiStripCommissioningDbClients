// Last commit: $Id: SamplingHistosUsingDb.h,v 1.3 2008/02/14 13:53:04 bainbrid Exp $

#ifndef DQM_SiStripCommissioningClients_SamplingHistosUsingDb_H
#define DQM_SiStripCommissioningClients_SamplingHistosUsingDb_H

#include "DQM/SiStripCommissioningClients/interface/SamplingHistograms.h"
#include "DQM/SiStripCommissioningDbClients/interface/CommissioningHistosUsingDb.h"
#include "OnlineDB/SiStripConfigDb/interface/SiStripConfigDb.h"
#include <boost/cstdint.hpp>
#include <string>
#include <map>

class SamplingHistosUsingDb : public CommissioningHistosUsingDb, public SamplingHistograms {
  
 public:
  
  SamplingHistosUsingDb( MonitorUserInterface*,
			 const DbParams& );
  
  SamplingHistosUsingDb( MonitorUserInterface*,
			 SiStripConfigDb* const );
  
  SamplingHistosUsingDb( DaqMonitorBEInterface*,
			 SiStripConfigDb* const );

  virtual ~SamplingHistosUsingDb();

  virtual void uploadConfigurations();
  
 private:
  
  void update( SiStripConfigDb::DeviceDescriptions& );
  
  void create( SiStripConfigDb::AnalysisDescriptions&, Analysis );
  
};

#endif // DQM_SiStripCommissioningClients_SamplingHistosUsingDb_H
