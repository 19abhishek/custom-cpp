const CustomCpp = require('./NativeCustomCpp').default;

export function multiply(a: number, b: number): number {
  return CustomCpp.multiply(a, b);
}
