
#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_


#define SET_BIT(registerName, bitNumber) (registerName |= (1 << bitNumber))
#define CLR_BIT(registerName, bitNumber) (registerName &= ~(1 << bitNumber))
#define TOGGLE_BIT(registerName, bitNumber) (registerName ^= (1 << bitNumber))
#define GET_BIT(registerName, bitNumber) ((registerName >> bitNumber) & 1)

#endif /* BIT_MANIPULATION_H_ */