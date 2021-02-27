const prompt = require("prompt")

const playGame = (difficulty = 1) => {
  console.log("You're a secret agent breaking into a LEVEL " + difficulty + " server room\n")
  console.log("Your SuperHacker 2000 tells you the following information...\n")

  const a = Math.round(Math.random() + difficulty + difficulty)
  const b = Math.round(Math.random() + difficulty + difficulty)
  const c = Math.round(Math.random() + difficulty + difficulty)

  const sum = a + b + c;
  const product = a * b * c;

  console.log()
  console.log("+ There are three numbers in the code\n")
  console.log("+ The codes multiply to give " + product)
  console.log("+ The codes add-up to " + sum)

  console.log()
  console.log("Enter the three code numbers separated by a space\n")
  console.log()

 let hasWon = false

 prompt.start()
  // Process the numbers in the input
    prompt.get(["answer"], (err, result) => {

      const answerArr = result.answer.split(' ')

      const answerSum = answerArr.reduce((acc, cur) => Number(acc) + Number(cur), 0)
      const answerProduct = answerArr.reduce((acc, cur) => Number(acc) * Number(cur), 1)
      console.log("Sum", answerSum, "Product", answerProduct)
      
      
      if (answerSum === sum && answerProduct === product) {
        console.log("CONGRATULATIONS, YOU'RE IN. Now hurry before anyone finds you.\n")
        console.log("==============================================================\n")
        hasWon = true
      } else {
        console.log("BOOM :-( You failed, try again!\n")
      }
    })
}

playGame()