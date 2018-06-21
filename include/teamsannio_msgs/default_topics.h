/*
 * Copyright 2018 Giuseppe Silano, University of Sannio in Benevento, Italy
 * Copyright 2018 Pasquale Oppido, University of Sannio in Benevento, Italy
 * Copyright 2018 Luigi Iannelli, University of Sannio in Benevento, Italy
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TEAMSANNIO_MSGS_H_
#define TEAMSANNIO_MSGS_H_

namespace teamsannio_msgs {
	namespace default_topics {

        static constexpr char FILTERED_OUTPUT[] = "filteredOutput";
        static constexpr char STATE_ERRORS[] = "stateErrors";

        static constexpr char ODOMETRY_GT[] = "odometry_gt";

        static constexpr char REFERENCE_ANGLES[] = "referenceAngles";
        static constexpr char SMOOTHED_TRAJECTORY[] = "smoothedTrajectory";

        static constexpr char BEBOP_REFERENCE_ANLGES[] = "bebopAngles";


	}  // end namespace default_topics
}  // end namespace teamsannio_msgs

#endif /* TEAMSANNIO_MSGS_H_ */
