// Last commit: $Id: $

#ifndef DQM_SiStripCommissioningClients_ApvTimingHistosUsingDb_H
#define DQM_SiStripCommissioningClients_ApvTimingHistosUsingDb_H

#include "DQM/SiStripCommissioningClients/interface/ApvTimingHistograms.h"
#include "DQM/SiStripCommissioningDbClients/interface/CommissioningHistosUsingDb.h"
#include "OnlineDB/SiStripConfigDb/interface/SiStripConfigDb.h"
#include <boost/cstdint.hpp>
#include <string>
#include <map>

class ApvTimingHistosUsingDb : public ApvTimingHistograms,
			       public CommissioningHistosUsingDb 
{
  
 public:
  
  ApvTimingHistosUsingDb( MonitorUserInterface*,
			  const DbParams& );
  virtual ~ApvTimingHistosUsingDb();

  virtual void uploadToConfigDb();
  
 private:

  void update( SiStripConfigDb::DeviceDescriptions& );

  void update( SiStripConfigDb::FedDescriptions& );
  
  
};

#endif // DQM_SiStripCommissioningClients_ApvTimingHistosUsingDb_H

