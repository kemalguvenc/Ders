import React from "react";
import { StyleSheet, View, Text, Platform } from "react-native";
import { FontAwesome5 } from "@expo/vector-icons";
import Slider from "@react-native-community/slider";
import sliderThumbImage from "./../assets/slider-thumb-image.png";
import { BOX, TEXT_VALUE, TEXT_LABEL } from "../style";

const MIN_HEIGHT = 50;
const MAX_HEIGHT = 250;

function HeightSelection({ style, height, setHeight }) {
  return (
    <View style={style}>
      <View style={styles.heightSelection}>
        <Text style={styles.label}>BOY</Text>

        <Text style={styles.value}>
          {height}
          <Text style={styles.unit}> cm</Text>
        </Text>

     
        <Slider
          style={styles.slider}
          minimumValue={MIN_HEIGHT}
          maximumValue={MAX_HEIGHT}
          minimumTrackTintColor="#9a5871"
          maximumTrackTintColor="#000000"
          thumbImage={Platform.OS === "android" && sliderThumbImage}
          onValueChange={(value) => setHeight(Math.round(value))}
          value={height}
        />
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  heightSelection: {
    ...BOX,
    marginVertical: 10,
  },
  label: {
    ...TEXT_LABEL,
  },
  value: {
    ...TEXT_VALUE,
  },
  unit: {
    fontSize: 16,
  },
  slider: {
    width: "100%",
    height: 40,
    transform: Platform.OS === "android" ? [{ scale: 1.1 }] : [],
  },
});

export default React.memo(HeightSelection);
