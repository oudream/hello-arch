//
// Created by vahagn on 12/2/19.
//

#ifndef STEREOVISION_V_4_L_CAMERA_H
#define STEREOVISION_V_4_L_CAMERA_H
#include "icamera.h"
#include <string>

namespace StereoVision {
namespace video {

class V4LCamera : public ICamera {
 public:
  V4LCamera(const std::string & device_name);

};

}
}

#endif //STEREOVISION_V_4_L_CAMERA_H
