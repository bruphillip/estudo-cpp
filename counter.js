const now = new Date().getMinutes();
let count = 0;
while (now === new Date().getMinutes()) {
  count++;
  console.log(count);
}
