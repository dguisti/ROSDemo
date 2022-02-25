
"use strict";

let DiagnosticsRosProfilingUnit = require('./DiagnosticsRosProfilingUnit.js');
let LightSensor = require('./LightSensor.js');
let DiagnosticsRosLink = require('./DiagnosticsRosLink.js');
let Trajectory = require('./Trajectory.js');
let ParamTuner = require('./ParamTuner.js');
let WheelsCmdDBV2Stamped = require('./WheelsCmdDBV2Stamped.js');
let EncoderStamped = require('./EncoderStamped.js');
let FSMState = require('./FSMState.js');
let DroneMode = require('./DroneMode.js');
let DiagnosticsCodeProfiling = require('./DiagnosticsCodeProfiling.js');
let StreetNames = require('./StreetNames.js');
let KinematicsParameters = require('./KinematicsParameters.js');
let CarControl = require('./CarControl.js');
let SourceTargetNodes = require('./SourceTargetNodes.js');
let WheelsCmdStamped = require('./WheelsCmdStamped.js');
let ObstacleProjectedDetectionList = require('./ObstacleProjectedDetectionList.js');
let DiagnosticsRosTopic = require('./DiagnosticsRosTopic.js');
let Rect = require('./Rect.js');
let TagInfo = require('./TagInfo.js');
let IntersectionPose = require('./IntersectionPose.js');
let StreetNameDetection = require('./StreetNameDetection.js');
let DiagnosticsRosTopicArray = require('./DiagnosticsRosTopicArray.js');
let ThetaDotSample = require('./ThetaDotSample.js');
let DiagnosticsRosLinkArray = require('./DiagnosticsRosLinkArray.js');
let VehiclePose = require('./VehiclePose.js');
let AprilTagDetectionArray = require('./AprilTagDetectionArray.js');
let DuckiebotLED = require('./DuckiebotLED.js');
let ObstacleImageDetectionList = require('./ObstacleImageDetectionList.js');
let Vsample = require('./Vsample.js');
let IntersectionPoseImg = require('./IntersectionPoseImg.js');
let CoordinationSignal = require('./CoordinationSignal.js');
let LanePose = require('./LanePose.js');
let LEDDetection = require('./LEDDetection.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let DiagnosticsRosProfiling = require('./DiagnosticsRosProfiling.js');
let MaintenanceState = require('./MaintenanceState.js');
let WheelsCmd = require('./WheelsCmd.js');
let KinematicsWeights = require('./KinematicsWeights.js');
let LEDDetectionArray = require('./LEDDetectionArray.js');
let DiagnosticsRosNode = require('./DiagnosticsRosNode.js');
let AprilTagDetection = require('./AprilTagDetection.js');
let LEDInterpreter = require('./LEDInterpreter.js');
let DuckieSensor = require('./DuckieSensor.js');
let DiagnosticsRosParameterArray = require('./DiagnosticsRosParameterArray.js');
let Twist2DStamped = require('./Twist2DStamped.js');
let AprilTagsWithInfos = require('./AprilTagsWithInfos.js');
let Pixel = require('./Pixel.js');
let Vector2D = require('./Vector2D.js');
let ObstacleProjectedDetection = require('./ObstacleProjectedDetection.js');
let AntiInstagramThresholds = require('./AntiInstagramThresholds.js');
let VehicleCorners = require('./VehicleCorners.js');
let EpisodeStart = require('./EpisodeStart.js');
let LEDDetectionDebugInfo = require('./LEDDetectionDebugInfo.js');
let DisplayFragment = require('./DisplayFragment.js');
let Rects = require('./Rects.js');
let DroneControl = require('./DroneControl.js');
let WheelEncoderStamped = require('./WheelEncoderStamped.js');
let NodeParameter = require('./NodeParameter.js');
let SegmentList = require('./SegmentList.js');
let BoolStamped = require('./BoolStamped.js');
let SceneSegments = require('./SceneSegments.js');
let ObstacleType = require('./ObstacleType.js');
let Segment = require('./Segment.js');
let ObstacleImageDetection = require('./ObstacleImageDetection.js');
let DiagnosticsCodeProfilingArray = require('./DiagnosticsCodeProfilingArray.js');
let ButtonEvent = require('./ButtonEvent.js');
let CoordinationClearance = require('./CoordinationClearance.js');
let StopLineReading = require('./StopLineReading.js');
let LEDPattern = require('./LEDPattern.js');
let SignalsDetectionETHZ17 = require('./SignalsDetectionETHZ17.js');
let LineFollowerStamped = require('./LineFollowerStamped.js');
let SignalsDetection = require('./SignalsDetection.js');
let TurnIDandType = require('./TurnIDandType.js');
let IntersectionPoseImgDebug = require('./IntersectionPoseImgDebug.js');

module.exports = {
  DiagnosticsRosProfilingUnit: DiagnosticsRosProfilingUnit,
  LightSensor: LightSensor,
  DiagnosticsRosLink: DiagnosticsRosLink,
  Trajectory: Trajectory,
  ParamTuner: ParamTuner,
  WheelsCmdDBV2Stamped: WheelsCmdDBV2Stamped,
  EncoderStamped: EncoderStamped,
  FSMState: FSMState,
  DroneMode: DroneMode,
  DiagnosticsCodeProfiling: DiagnosticsCodeProfiling,
  StreetNames: StreetNames,
  KinematicsParameters: KinematicsParameters,
  CarControl: CarControl,
  SourceTargetNodes: SourceTargetNodes,
  WheelsCmdStamped: WheelsCmdStamped,
  ObstacleProjectedDetectionList: ObstacleProjectedDetectionList,
  DiagnosticsRosTopic: DiagnosticsRosTopic,
  Rect: Rect,
  TagInfo: TagInfo,
  IntersectionPose: IntersectionPose,
  StreetNameDetection: StreetNameDetection,
  DiagnosticsRosTopicArray: DiagnosticsRosTopicArray,
  ThetaDotSample: ThetaDotSample,
  DiagnosticsRosLinkArray: DiagnosticsRosLinkArray,
  VehiclePose: VehiclePose,
  AprilTagDetectionArray: AprilTagDetectionArray,
  DuckiebotLED: DuckiebotLED,
  ObstacleImageDetectionList: ObstacleImageDetectionList,
  Vsample: Vsample,
  IntersectionPoseImg: IntersectionPoseImg,
  CoordinationSignal: CoordinationSignal,
  LanePose: LanePose,
  LEDDetection: LEDDetection,
  Pose2DStamped: Pose2DStamped,
  DiagnosticsRosProfiling: DiagnosticsRosProfiling,
  MaintenanceState: MaintenanceState,
  WheelsCmd: WheelsCmd,
  KinematicsWeights: KinematicsWeights,
  LEDDetectionArray: LEDDetectionArray,
  DiagnosticsRosNode: DiagnosticsRosNode,
  AprilTagDetection: AprilTagDetection,
  LEDInterpreter: LEDInterpreter,
  DuckieSensor: DuckieSensor,
  DiagnosticsRosParameterArray: DiagnosticsRosParameterArray,
  Twist2DStamped: Twist2DStamped,
  AprilTagsWithInfos: AprilTagsWithInfos,
  Pixel: Pixel,
  Vector2D: Vector2D,
  ObstacleProjectedDetection: ObstacleProjectedDetection,
  AntiInstagramThresholds: AntiInstagramThresholds,
  VehicleCorners: VehicleCorners,
  EpisodeStart: EpisodeStart,
  LEDDetectionDebugInfo: LEDDetectionDebugInfo,
  DisplayFragment: DisplayFragment,
  Rects: Rects,
  DroneControl: DroneControl,
  WheelEncoderStamped: WheelEncoderStamped,
  NodeParameter: NodeParameter,
  SegmentList: SegmentList,
  BoolStamped: BoolStamped,
  SceneSegments: SceneSegments,
  ObstacleType: ObstacleType,
  Segment: Segment,
  ObstacleImageDetection: ObstacleImageDetection,
  DiagnosticsCodeProfilingArray: DiagnosticsCodeProfilingArray,
  ButtonEvent: ButtonEvent,
  CoordinationClearance: CoordinationClearance,
  StopLineReading: StopLineReading,
  LEDPattern: LEDPattern,
  SignalsDetectionETHZ17: SignalsDetectionETHZ17,
  LineFollowerStamped: LineFollowerStamped,
  SignalsDetection: SignalsDetection,
  TurnIDandType: TurnIDandType,
  IntersectionPoseImgDebug: IntersectionPoseImgDebug,
};
