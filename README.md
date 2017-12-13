# SML-project(SOLETTA-MACHINE-LEARNING PROJECT)
2017-fall semester graduation Project Intel Edison Board에 Soletta Deep Learning Application Development

# Introduction

Open Hardware Platform인 Intel Edison Board에 Soletta Project Framework를 이용하여 Deep Learning Application을 개발하는 것이 본 졸업작품의 목표이다.

본 작품은 초소형 보드 컴퓨터인 Intel Edison Board를 이용하여  IoT Deep Learning Application을 개발하였다.

3 Axis Accelerometer Sensor를 이용하여 X_axis, Y_axis, Z_axis 값을 읽어와 FANN 라이브러리를 이용하여 학습시켰던 움직임 중에 가장 비슷한 운동을 찾는, 일종의 Motion detection을 구현하였다.


# Development Method

3축 가속도센서를 손목에 감고 Arduino Software를 이용하여 analog input값을 serial monitor를 통해 읽어온다.

14개의 motion (brush_teeth, climb_stairs, comb_hair, descend_stairs, drink_glass, eat_meat, eat_soup, getup_bed, liedown_bed, pour_water, sitdown_chair, standup_chair, use_telephone, walk) 중 6개의 motion을 (X1,X2,X3,Y) 형태의 dataset으로 학습(train)시킨다.

arduino를 통해 읽어온 data를 trained ANN model인 sml_float.net으로 테스트(test)한다.


# Conclusion

3축 가속도 센서 데이터만을 가지고 motion detection을 하는 데에는 많은 한계점이 있다. 정확한 motion detection을 위해서는 추이를 training에 반영해야하는데 RNN을 이용하게 되면 hidden layer에 이전 데이터를 저장해서 데이터 간의 추이를 learning 시키는데에 더 효과적일 수 있다. 오차율을 0.15~0.3 까지 낮출 수 있을 것으로 예상된다.

본 졸업작품에서는 soletta project가 fuzzy logic과 FANN library를 지원하기 때문에 ANN 알고리즘을 선택하게 되었다.

호스트 시스템(compile)과 목표 시스템(execute; Intel Edison Board)이 상호 호환되지 않는 환경이었기 때문에 Linux OS PC(Ubuntu)와 cross compilation하였다.
